/* Copyright (C) 2010, 2012 Stefan Frenz
 * 
 * This file is part of SJC, the Small Java Compiler written by Stefan Frenz.
 * 
 * SJC is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * SJC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with SJC. If not, see <http://www.gnu.org/licenses/>.
 */

package sjc.ui;

import java.awt.BorderLayout;
import java.awt.Dimension;
import java.awt.GridLayout;
import java.awt.Toolkit;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import java.io.File;
import java.io.IOException;
import java.io.OutputStream;
import java.util.ArrayList;

import javax.swing.DefaultListModel;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JFileChooser;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JList;
import javax.swing.JPanel;
import javax.swing.JRadioButton;
import javax.swing.JScrollPane;
import javax.swing.JSplitPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;

import sjc.compbase.Context;
import sjc.osio.sun.ReflectionSymbols;
import sjc.osio.sun.SunOS;
import sjc.symbols.SymbolFactory;

public class SCG extends JFrame {
  private static final long serialVersionUID = 1L;

  public static void main(String argv[]) {
    SwingUtilities.invokeLater(new Runnable() {
      @Override
      public void run() {
        new SCG();
      }
    });
  }

  private static final String[] PROFILES = {"x86 Debug", "x86 Release", "amd64", "ATmega"};
  private static final String[] ARCHES = {"ia32", "ia32opt", "amd64", "atmega", "atmegaOpt", "ssa32", "ssa64"};
  private static final String[] OUT_FORMATS = {"raw", "boot"};
  private static final String[] FLASH_SIZES = {"8k", "16k", "32k", "64k"};

  private final JComboBox profileList;
  private final JComboBox archField;
  private final JComboBox outFormat;
  private final JCheckBox verboseFlag;
  private final JCheckBox boundCheckFlag;
  private final JComboBox flashSize;
  private final JTextField headerFile;
  private final JTextField bootConfig;
  private final JPanel atmegaPanel;
  private final JPanel overridePanel;
  private final JButton showOverrides;

  private final JList sourceList;
  private final DefaultListModel sourceModel;
  private final JTextField workDir;
  private final JButton runButton;

  private final JTextArea outputArea;
  private final JTextField previewField;
  private final JButton showPreview;
  private final JPanel previewPanel;

  private final JFileChooser fileChooser;
  private final ArrayList<String> args;

  private SCG() {
    super("SJC Compiler");
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setLayout(new BorderLayout());
    args = new ArrayList<>();

    JPanel topPanel = new JPanel(new BorderLayout(4, 4));
    JPanel profileRow = new JPanel(new GridLayout(1, 0, 4, 4));
    profileRow.add(new JLabel("Profile:"));
    profileList = new JComboBox(PROFILES);
    profileList.addActionListener(new ActionListener() {
      @Override
      public void actionPerformed(ActionEvent e) {
        applyProfile();
      }
    });
    profileRow.add(profileList);
    profileRow.add(new JPanel());
    topPanel.add(profileRow, BorderLayout.NORTH);

    JPanel optRow = new JPanel(new GridLayout(1, 0, 4, 4));
    optRow.add(new JLabel("Arch:"));
    archField = new JComboBox(ARCHES);
    optRow.add(archField);
    optRow.add(new JLabel("Output:"));
    outFormat = new JComboBox(OUT_FORMATS);
    optRow.add(outFormat);
    verboseFlag = new JCheckBox("Verbose");
    optRow.add(verboseFlag);
    boundCheckFlag = new JCheckBox("Bound checks");
    optRow.add(boundCheckFlag);
    topPanel.add(optRow, BorderLayout.CENTER);

    atmegaPanel = new JPanel(new GridLayout(1, 0, 4, 4));
    atmegaPanel.add(new JLabel("Flash:"));
    flashSize = new JComboBox(FLASH_SIZES);
    atmegaPanel.add(flashSize);
    atmegaPanel.add(new JLabel("Header:"));
    headerFile = new JTextField("batmel32.bin");
    atmegaPanel.add(headerFile);
    atmegaPanel.add(new JLabel("Boot conf:"));
    bootConfig = new JTextField("bootconf.txt#floppy64");
    atmegaPanel.add(bootConfig);
    atmegaPanel.setVisible(false);
    topPanel.add(atmegaPanel, BorderLayout.SOUTH);

    add(topPanel, BorderLayout.NORTH);

    JPanel centerPanel = new JPanel(new BorderLayout(4, 4));
    JPanel filePanel = new JPanel(new BorderLayout(4, 4));
    JPanel fileLabelRow = new JPanel(new GridLayout(1, 0, 4, 4));
    fileLabelRow.add(new JLabel("Source files:"));
    JButton addButton = new JButton("Add");
    addButton.addActionListener(new ActionListener() {
      @Override
      public void actionPerformed(ActionEvent e) {
        addSourceFiles();
      }
    });
    fileLabelRow.add(addButton);
    JButton delButton = new JButton("Remove");
    delButton.addActionListener(new ActionListener() {
      @Override
      public void actionPerformed(ActionEvent e) {
        removeSourceFiles();
      }
    });
    fileLabelRow.add(delButton);
    filePanel.add(fileLabelRow, BorderLayout.NORTH);
    sourceModel = new DefaultListModel();
    sourceList = new JList(sourceModel);
    sourceList.setVisibleRowCount(6);
    filePanel.add(new JScrollPane(sourceList), BorderLayout.CENTER);
    centerPanel.add(filePanel, BorderLayout.CENTER);

    JPanel bottomCenter = new JPanel(new GridLayout(1, 0, 4, 4));
    bottomCenter.add(new JLabel("Work dir:"));
    workDir = new JTextField(System.getProperty("user.dir"));
    workDir.setEditable(false);
    bottomCenter.add(workDir);
    showOverrides = new JButton("Advanced");
    showOverrides.addActionListener(new ActionListener() {
      @Override
      public void actionPerformed(ActionEvent e) {
        overridePanel.setVisible(!overridePanel.isVisible());
        pack();
      }
    });
    bottomCenter.add(showOverrides);
    runButton = new JButton("Run");
    runButton.addActionListener(new ActionListener() {
      @Override
      public void actionPerformed(ActionEvent e) {
        doCompile();
      }
    });
    bottomCenter.add(runButton);
    centerPanel.add(bottomCenter, BorderLayout.SOUTH);

    overridePanel = new JPanel(new GridLayout(0, 4, 2, 2));
    overridePanel.add(new JLabel("Extra options:"));
    final JTextField extraOpts = new JTextField();
    overridePanel.add(extraOpts);
    overridePanel.add(new JLabel("Image size:"));
    final JTextField imgSize = new JTextField();
    overridePanel.add(imgSize);
    overridePanel.add(new JLabel("Address:"));
    final JTextField address = new JTextField();
    overridePanel.add(address);
    overridePanel.add(new JLabel("Start method:"));
    final JTextField startMthd = new JTextField();
    overridePanel.add(startMthd);
    overridePanel.setVisible(false);
    centerPanel.add(overridePanel, BorderLayout.NORTH);

    previewPanel = new JPanel(new BorderLayout(4, 4));
    showPreview = new JButton("Show command line");
    showPreview.addActionListener(new ActionListener() {
      @Override
      public void actionPerformed(ActionEvent e) {
        previewField.setVisible(!previewField.isVisible());
        showPreview.setText(previewField.isVisible() ? "Hide command line" : "Show command line");
        pack();
      }
    });
    previewPanel.add(showPreview, BorderLayout.WEST);
    previewField = new JTextField();
    previewField.setEditable(false);
    previewField.setVisible(false);
    previewPanel.add(previewField, BorderLayout.CENTER);
    centerPanel.add(previewPanel, BorderLayout.NORTH);

    outputArea = new JTextArea();
    outputArea.setEditable(false);
    outputArea.setWrapStyleWord(false);
    JScrollPane outputScroll = new JScrollPane(outputArea);

    JSplitPane splitPane = new JSplitPane(JSplitPane.VERTICAL_SPLIT, centerPanel, outputScroll);
    splitPane.setResizeWeight(0.6);
    add(splitPane, BorderLayout.CENTER);

    pack();
    Dimension screen = Toolkit.getDefaultToolkit().getScreenSize();
    int width = Math.min(getWidth(), 800);
    int height = Math.min(getHeight(), 600);
    setSize(width, height);
    splitPane.setDividerLocation(height / 2);
    setVisible(true);

    fileChooser = new JFileChooser();
    profileList.setSelectedIndex(1);
  }

  private String[] buildArgs() {
    ArrayList<String> list = new ArrayList<>();
    String text;

    if (verboseFlag.isSelected()) list.add("-v");
    if (boundCheckFlag.isSelected()) list.add("-b");
    if ((text = archField.getSelectedItem().toString()) != null && !text.equals("ia32")) {
      list.add("-t");
      list.add(text);
    }
    if ((text = outFormat.getSelectedItem().toString()) != null && !text.equals("raw")) {
      list.add("-o");
      list.add(text);
    }

    for (int i = 0; i < sourceModel.size(); i++)
      list.add(sourceModel.getElementAt(i).toString());

    String[] result = new String[list.size()];
    list.toArray(result);
    return result;
  }

  private void applyProfile() {
    String profile = (String) profileList.getSelectedItem();
    atmegaPanel.setVisible("ATmega".equals(profile));
    previewField.setText("");
    archField.setSelectedItem("ia32");
    outFormat.setSelectedItem("raw");
    verboseFlag.setSelected(false);
    boundCheckFlag.setSelected(false);
    flashSize.setSelectedItem("32k");
    headerFile.setText("batmel32.bin");
    bootConfig.setText("bootconf.txt#floppy64");

    if ("x86 Debug".equals(profile)) {
      verboseFlag.setSelected(true);
      boundCheckFlag.setSelected(true);
      archField.setSelectedItem("ia32");
      outFormat.setSelectedItem("raw");
    } else if ("x86 Release".equals(profile)) {
      archField.setSelectedItem("ia32");
      outFormat.setSelectedItem("boot");
      bootConfig.setText("bootconf.txt#floppy64");
    } else if ("amd64".equals(profile)) {
      archField.setSelectedItem("amd64");
      outFormat.setSelectedItem("boot");
      bootConfig.setText("bootconf.txt#floppy64");
    } else if ("ATmega".equals(profile)) {
      archField.setSelectedItem("atmega");
      outFormat.setSelectedItem("boot");
      verboseFlag.setSelected(false);
      boundCheckFlag.setSelected(false);
    }
    updatePreview();
  }

  private void updatePreview() {
    StringBuilder line = new StringBuilder();
    for (String s : buildArgs()) {
      if (line.length() > 0) line.append(' ');
      line.append(s);
    }
    previewField.setText(line.toString());
  }

  private void addSourceFiles() {
    fileChooser.setFileSelectionMode(JFileChooser.FILES_AND_DIRECTORIES);
    fileChooser.setMultiSelectionEnabled(true);
    if (fileChooser.showOpenDialog(this) == JFileChooser.APPROVE_OPTION) {
      for (File f : fileChooser.getSelectedFiles())
        sourceModel.addElement(f.getAbsolutePath());
    }
    updatePreview();
  }

  private void removeSourceFiles() {
    for (Object o : sourceList.getSelectedValuesList())
      sourceModel.removeElement(o);
    updatePreview();
  }

  private void doCompile() {
    setEnabled(false);
    final String[] argv = buildArgs();
    final StringBuilder argStr = new StringBuilder();
    for (int i = 0; i < argv.length; i++) {
      if (i > 0) argStr.append(' ');
      argStr.append(argv[i]);
    }
    outputArea.setText("");

    SwingUtilities.invokeLater(new Runnable() {
      @Override
      public void run() {
        outputArea.append("calling SJC with parameters:\n");
        outputArea.append(argStr.toString() + "\n\n");
        OutputStream textOut = new OutputStream() {
          @Override
          public void write(int b) throws IOException {
            outputArea.append(String.valueOf((char) b));
          }
        };
        Context ctx = new Context(new SunOS(textOut));
        SymbolFactory.preparedReflectionSymbols = new ReflectionSymbols();
        int res = ctx.compile(argv, "vJRE");
        if (res == 0) ctx.writeSymInfo();
        else ctx.out.println("\ncompiler result: " + res);
      }
    });
    setEnabled(true);
  }
}
