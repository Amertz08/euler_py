import euler_py as eul


def test_problem_one():
    result = eul.problem_one(10)
    assert result == 23, f'Problem 1 should be 23: {result}'


def test_problem_two():
    result = eul.problem_two(89)
    assert result == 44, f'Problem 2 should be 44: {result}'


def test_problem_three():
    result = eul.problem_three(13195)
    assert result == 29, f'Problem 3 should be 29: {result}'


def test_problem_four():
    result = eul.problem_four(2)
    assert result == 9009, f'Problem 4 should be 9009: {result}'
