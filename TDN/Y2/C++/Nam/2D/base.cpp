struct Vector2D {
	int x, y;
};

struct Segment {
	Vector2D start, end;
};

struct Line {
	int a, b, c;
};

struct Circle {
	int x, y, R;
};

Vector2D rotate90deg(Vector2D v) {
	return { v.y, -v.x };
};

Line getLine(Segment s) {
	auto s1 = s.start, s2 = s.end;
	int a = s1.y - s2.y, b = s2.x - s1.x, c = s1.x * s2.y - s2.x * s1.y;
	return { a, b, c };
};

// khác phương: cắt (tích vô hướng)
// cùng phương: song song/trùng?
bool checkCollision(Line a, Line b);

// check trái dấu
bool checkCollision(Line a, Segment b);

// d(a) giao b && d(b) giao a
bool checkCollision(Segment a, Segment b);

// d(O, d)^2 <= R^2
bool checkCollision(Circle c, Line d);

// Đoạn thẳng: a | Đường vuông góc a từ O: d
// 1. d không cắt a -> d(OA || OB) <= R
// 2. d cắt a       -> d(d giao a) <= R
bool checkCollision(Circle c, Segment a);
