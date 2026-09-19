## Lambdas in C++

They are used to streamline the process of using short logic for methods like sort/find_if

## Structure
[ capture clause ] (parameter list)  mutable specifiers -> return type {
    body
}

## Capture clause (mandatory)
    -> States which variables from the sorrounding scope are accesible

## Parameter list (optional if its empty)
    -> Parametes passed to the lambda when called (works like a function or method)

## Mutable (optional)
    -> Allow modification of variables in the body

## Specifiers (optional)
    -> Exception specs like: noexcept, consetexpr...

## Return type (optional, if not set is deducted)
    -> Explicitly declares the return type using trailing return type syntax (setting it in other place not as usual)

## Body
    -> Code executed by the lambda

## Examples:
int x = 10;
int y = 20;

// 1. Capture nothing
auto f1 = []() { /* Cannot access x or y */ };

// 2. Capture specific variables by value (read-only copy)
auto f2 = [x]() { std::cout << x; };

// 3. Capture specific variables by reference
auto f3 = [&x, &y]() { x += 5; y += 10; };

// 4. Implicit capture by value (all referenced local variables)
auto f4 = [=]() { std::cout << x + y; };

// 5. Implicit capture by reference (all referenced local variables)
auto f5 = [&]() { x++; y++; };

// 6. Mixed captures (default by value, specific by reference)
auto f6 = [=, &x]() { #copy# -> y; #reference# -> x++ };

// 7. Mixed captures (default by reference, specific by value)
auto f7 = [&, x]() { #copy# -> x; #reference# -> y++; };

## Mutable keyWord
By default, the call operator operator() of a lambda with value captures is const. If you need to modify the copied variable inside the lambda body, you must mutable.

