package main

/*
Массив без указания размера - слайс
очень удобен
*/
import "fmt"

func main() {

	// 1 - слайсы А В
	var n int
	fmt.Scan(&n)

	var A []int
	for i := 0; i < n; i++ {
		A = append(A, i+1)
	}

	B := []int{n - 5, n - 10, n - 20} //короткая инициализация
	A = append(A, B...)

	fmt.Print(A, len(A), cap(A), "\n")
	fmt.Print(B, "\n\n")

	// 2 - слайс С со значениями по умолчанию
	C := make([]int, 5, 15) // быстрое создание массива
	fmt.Print(C, "\n\n")

	// 3 - разница в добавлении и присваивании элементов в s1 и s1
	s1 := make([]int, 10)
	s2 := make([]int, 10)
	for i := 0; i < 10; i++ {
		s1[i] = i + 1
		s2 = append(s2, i+1)
	}
	fmt.Print(s1, " ", s2, "\n\n")

	// 4 - внутри слайса s3 - ссылка на массив, копируется, если пресвоить
	s3 := B
	B[0] = 100
	fmt.Print(B, s3)
}
