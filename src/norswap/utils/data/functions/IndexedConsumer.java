package norswap.utils.data.functions;

@FunctionalInterface
public interface IndexedConsumer<T> {
    void accept(int i, T value);
}
