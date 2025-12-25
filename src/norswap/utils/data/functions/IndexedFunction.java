package norswap.utils.data.functions;

@FunctionalInterface
public interface IndexedFunction<T, R> {
    R apply(int index, T value);
}
