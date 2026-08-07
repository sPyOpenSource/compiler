/* Shared quiz widget for jcore compiler lessons.
 *
 * Usage:
 *   <div class="quiz">
 *     <p class="q">Question text</p>
 *     <ul class="options">
 *       <li><button data-correct="true"  data-explain="Why A is right">Answer A</button></li>
 *       <li><button data-correct="false" data-explain="Why B is wrong">Answer B</button></li>
 *     </ul>
 *     <p class="feedback" hidden></p>
 *   </div>
 *   <script src="../assets/quiz.js"></script>
 *
 * On selection: locks the question, colors the pick green/red, shows the
 * explanation for the chosen option. Correct answers are never revealed
 * for wrong picks — re-picking is disabled, so retrieval happens once.
 */
(function () {
  function initQuiz(quiz) {
    var options = quiz.querySelectorAll(".options button");
    var feedback = quiz.querySelector(".feedback");

    options.forEach(function (btn) {
      btn.addEventListener("click", function () {
        if (quiz.classList.contains("locked")) return;
        quiz.classList.add("locked");

        var correct = btn.getAttribute("data-correct") === "true";
        options.forEach(function (b) {
          b.disabled = true;
          b.classList.remove("selected");
        });
        btn.classList.add("selected");
        btn.classList.add(correct ? "correct" : "wrong");

        if (feedback) {
          feedback.hidden = false;
          feedback.textContent = (correct ? "Correct. " : "Not quite. ")
            + (btn.getAttribute("data-explain") || "");
          feedback.className = "feedback " + (correct ? "fb-ok" : "fb-no");
        }
      });
    });
  }

  document.addEventListener("DOMContentLoaded", function () {
    document.querySelectorAll(".quiz").forEach(initQuiz);
  });
})();
