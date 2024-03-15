package main

func main() {

	var a int     //0
	var b string  //" "
	var c bool    // false
	var d float32 // 0.0

	const q int32 = 1000

	var s1, s2 string = "123", "456"

	var (
		my_name  = "Step"
		my_age   = 18
		i_am_gay = false
	)

	println("default values:", a, b, c, d)
	println(s1, s2)
	println(my_name, my_age, i_am_gay)
	println(q)

}
