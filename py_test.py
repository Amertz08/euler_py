import euler_py as eul


def test_problem_one():
    result = eul.problem_one(10)
    assert result == 23, f'Problem 1 should be 23: {result}'
