pasta: float = 1.99
cucumber: float = 2.99
sugar: float = 2.99
salt: float = 3.99

def cash_pay(cost: float, moneys: int) -> bool:

    if moneys >= cost: # Cash pay operation
        moneys -= cost
        print(f"moneys left: {moneys}")

        return True
    elif moneys < cost:
        return False
    else:
        return False
    
def buy_from_shop(items: list, moneys: int) -> None:
    # items list: ['cucumber', 'pasta', 'sugar', 'salt']
    
    for i in range(len(items)):

        if cash_pay(items[i], moneys) == False:
            print("Failed to pay, not enough moneys!")
            break;

        cash_pay(items[i], moneys)

if __name__ == "__main__":

    moneys = 100.0

    items_to_buy = [sugar]
    buy_from_shop(items_to_buy, moneys)
