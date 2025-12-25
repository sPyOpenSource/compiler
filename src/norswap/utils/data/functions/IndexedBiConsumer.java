package norswap.utils.data.functions;

@FunctionalInterface
public interface IndexedBiConsumer<T, U> {
    void accept(int i, T t, U u);
}
