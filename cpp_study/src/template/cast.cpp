#include <iostream>

void carbon_thaw(const int &encased_solo)
{
    auto &hibernation_sick_solo = const_cast<int &>(encased_solo);
    hibernation_sick_solo++;
    std::cout << "hibernation_sick_solo = " << hibernation_sick_solo << std::endl;
}

short increment_as_short(void *target)
{
    auto as_short = static_cast<short *>(target);
    *as_short     = *as_short + 1;
    return *as_short;
}

void access_memory_address()
{
    auto timer = reinterpret_cast<const unsigned long *>(0x1000000);
    std::cout << "the value at address 0x1000 = " << *timer << std::endl;
}

template <typename To, typename From>
To narrow_cast(From value)
{
    const auto converted = static_cast<To>(value);
    const auto backwards = static_cast<From>(converted);

    if (value != backwards) {
        throw std::runtime_error("Narrowed!");
    }

    return converted;
}

int main()
{
    int encased_solo = 3;
    carbon_thaw(encased_solo);
    std::cout << "encased_solo = " << encased_solo << std::endl;

    short beast{665};
    auto  mark_of_the_beast = increment_as_short(&beast);
    std::cout << "mark_of_the_beast =" << mark_of_the_beast << std::endl;

    // access_memory_address();

    int        perfect{496};
    const auto perfect_short = narrow_cast<short>(perfect);
    printf("perfect_short: %d\n", perfect_short);

    try {
        int        cyclic{142857};
        const auto cyclic_short = narrow_cast<short>(cyclic);
        printf("cyclic_short: %d\n", cyclic_short);
    }
    catch (const std::runtime_error &e) {
        printf("Exception: %s\n", e.what());
    }
}