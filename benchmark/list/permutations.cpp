<% render(instance) %>
<%= includes(x) %>

#include <boost/hana/list/list.hpp>


template <int i> struct x { };

int main() {
    auto go = boost::hana::permutations(
        <%= list(
            (0..x).map { |i| "x<#{i}>" },
            (0..x).map { |i| "x<#{i}>{}" }
        ) %>
    );
}
