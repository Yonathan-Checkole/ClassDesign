#include "Store.h"
#include "Order.h"
#include <iostream>

int main() {
    Item book{"Book", 12, 10.20, 12};
    Item coloredPencils{"Colored Pencils", 12, 42.15, 15};
    Item coloringPaper{ "Coloring Paper", 12, 8.15, 20};
    Item markers{"Markers", 12, 9.10, 50};
    Item crayons{"Crayons", 12, 1.35, 3};
    Item staples{"Stapels", 12, 102.05, 7};

    Store schoolSupplies{{book, coloredPencils, coloringPaper, markers, crayons, staples}};

    schoolSupplies.printStore();

    Order order{{book, coloredPencils, coloringPaper, markers, crayons}};
    
    order.addItem(staples);

    std::cout << "Price: $" << order.getPrice() << "\n";

}
