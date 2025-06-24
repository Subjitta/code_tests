#include <iostream>
#include <vector>

float pasta = 1.99f;
float cucumber = 2.99f;
float sugar = 2.99f;
float salt = 3.99f;

bool cash_pay(float& moneys, float cost) {
    if (moneys >= cost) { // Cash pay operation
        moneys -= cost;
        std::cout << "moneys left: " << moneys << std::endl;
        return true;
    } else {
        return false;
    }
}

void buy_from_shop(const std::vector<float>& items, float& moneys) {
    for (size_t i = 0; i < items.size(); ++i) {
        if (!cash_pay(moneys, items[i])) {
            std::cout << "Failed to pay, not enough moneys!" << std::endl;
            break;
        }
    }
}

int main() {
    float moneys = 100.0f;
    std::vector<float> items_to_buy = {sugar};
    buy_from_shop(items_to_buy, moneys);
    return 0;
}

