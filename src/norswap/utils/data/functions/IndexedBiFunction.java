package norswap.utils.data.functions;

@FunctionalInterface
public interface IndexedBiFunction<T, U, R> {
    R apply(int index, T t, U u);
}
