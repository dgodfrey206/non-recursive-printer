#include <iostream>

template<int... Indices>
struct indices {
    typedef indices<Indices..., sizeof...(Indices)> next;
};

template<int N>
struct build_indices {
    typedef typename build_indices<N - 1>::type::next type;
};

template<>
struct build_indices<0> {
    typedef indices<> type;
};

template<int n>
using build_indices_t = typename build_indices<n>::type;

template<int... Is>
void print_to_impl(indices<Is...>)
{
    auto l = {0, ((std::cout << Is+1 << std::endl), 0)...};
    (void)l;
}

template<int n>
void print_to() { print_to_impl(build_indices_t<n>()); }

template void print_to<1000>();
  
int main()
{
    print_to<1000>();
}
