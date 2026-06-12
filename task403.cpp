/*
Write a function createCounter. It should accept an initial integer init. It should return an object with three functions.

The three functions are:

    - increment() increases the current value by 1 and then returns it.
    - decrement() reduces the current value by 1 and then returns it.
    - reset() sets the current value to init and then returns it.

*/

/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
class Counter {
    constructor(value) {
        this.init_value = value;
        this.value = value;
    }
    increment() {
        this.value += 1;
        return this.value;
    }
    decrement() {
        this.value -= 1;
        return this.value;
    }
    reset() {
        this.value = this.init_value;
        return this.value;
    }
}

var createCounter = function(init) {
    let obj = new Counter(init);

    return obj;
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
