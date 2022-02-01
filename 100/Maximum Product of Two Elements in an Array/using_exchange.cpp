// exchange(a, b) replaces the value of a with b and returns the old value of a.

// int z = std::exchange(x, y);
// After this line of code executes:
// x is assigned the value of y,
// z is assigned the value that x had initially.

int maxProduct(vector<int>& nums) {
	auto m1 = 0, m2 = 0;
	for (auto n: nums) {
		if (n > m1)                    // new value in m1, old max in m2
            m2 = exchange(m1, n);
		else
			m2 = max(m2, n);
	}
	return (m1 - 1) * (m2 - 1);
}