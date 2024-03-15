package main

import "fmt"

func main() {
	//var AboutMe = make(map[string]int) альтернативная инициализация
	AboutMe := map[string]int{
		"age": 18,
		"pin": 1234,
	}

	my_name, ok1 := AboutMe["age"]
	my_pin, ok2 := AboutMe["pin"]

	fmt.Print(my_name, ok1, "\n", my_pin, ok2, "\n")
	fmt.Print(AboutMe, "\n")

	var A = make(map[int]int)
	var n int = 10
	for i := 1; i <= n; i++ {
		A[i] = i * i
	}
	var num int
	fmt.Scan(&num)
	if num <= len(A) {
		fmt.Print(A[num], "\n")
	} else {
		println("Uncorrect value\n")
	}

	for key, value := range AboutMe {
		fmt.Print(key, " - ", value, "\n")
	}

}
