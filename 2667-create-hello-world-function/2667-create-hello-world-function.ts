function createHelloWorld() {
	return (...args : any[]):string => "Hello World"
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */