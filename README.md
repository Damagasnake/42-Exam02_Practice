# 42 Exam Rank02 Tests

## Overview
This repository contains test cases for the exercises in the 42 School Exam Rank02. These tests are designed to help validate your solutions before the actual exam.

## Structure
Each exercise has its own set of tests organized in directories:

```
├── exercise_01
│   ├── test_cases
│   └── expected_outputs
├── exercise_02
│   ├── test_cases
│   └── expected_outputs
...
```

## Included Exercises
### Level01
- first_word
- fizzbuzz
- ft_putstr
- ft_revprint
- ft_strcpy
- ft_strlen
- ft_swap
- repeat_alpha

## How to Use
1. Clone this repository: `git clone https://github.com/Damagasnake/42-Exam.git`
2. Navigate to the exercise you're practicing
3. Run your solution against the test cases: `./your_solution < test_cases/test01.txt`
4. Compare your output with the expected results: `diff -u <(./your_solution < test_cases/test01.txt) expected_outputs/output01.txt`


## Disclaimer
These are unofficial test cases created by students for practice purposes. The actual exam may include different edge cases.

## Contributing
Feel free to submit additional test cases via pull requests.

## License
This project is available under the MIT License - see the LICENSE file for details.