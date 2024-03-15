koloda = [6,7,8,9,10,2,3,4,11] * 4

import random
random.shuffle(koloda)

print("Поиграем в очко?")
count = 0 

while True:
    choise = input("Будете брать карту? yes/no\n")
    if choise == "yes":
        current = koloda.pop()
        print("Вам попалась карта достоинством %d" %current)
        count += current
        if count > 21:
            print("Извитите, но вы проиграли")
            print("У вас %d очков." %count)
            break
        elif count == 21:
            print("Поздравляем, вы набрали 21!")
            break
        else:
            print("У вас %d очков." %count)
    elif choise == "no":
        print("У вас %d очков, и вы закончили игру." %count)
        break
    
print("До новых встреч!")