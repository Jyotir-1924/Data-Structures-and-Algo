import unittest

def next_multiple(n):
    return ((n + 4) // 5) * 5

def grading_students(grades):
    ans = []
    for grade in grades:
        if grade < 38:
            ans.append(grade)
        else:
            curr = next_multiple(grade)
            if (curr - grade) > 2:
                ans.append(grade)
            else:
                ans.append(curr)
    return ans

class TestGradingStudents(unittest.TestCase):
    def test_exact_multiples(self):
        self.assertEqual(grading_students([40, 45, 50]), [40, 45, 50])

    def test_round_up_within_two(self):
        self.assertEqual(grading_students([43, 44, 39]), [45, 45, 40])

    def test_no_rounding(self):
        self.assertEqual(grading_students([41, 42, 37]), [41, 42, 37])

    def test_below_threshold(self):
        self.assertEqual(grading_students([0, 10, 20, 30, 37]), [0, 10, 20, 30, 37])

    def test_edge_case_threshold(self):
        self.assertEqual(grading_students([38, 39, 40]), [40, 40, 40])

    def test_mixed_input(self):
        self.assertEqual(grading_students([33, 38, 67, 84, 29, 73]), [33, 40, 67, 85, 29, 75])

if __name__ == '__main__':
    unittest.main()
