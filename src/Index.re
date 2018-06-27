let evenly_divisible = (x: int, y: int) => {
    x mod y == 0;
};

let run = (count: int) => {
    for(curr in 1 to count) {
        let criteria = (evenly_divisible(curr, 3), evenly_divisible(curr, 5));

        let result: string =
            switch (criteria) {
            | (true, true) => "Fizzbuzz"
            | (true, false) => "Fizz"
            | (false, true) => "Buzz"
            | _ => string_of_int(curr)
            };

        print_endline(Printf.sprintf("%i: %s", curr, result));
    };
};

run(100);