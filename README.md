# AtCoder C++ Development Environment

A containerized development environment for AtCoder competitive programming with C++.

## Features

- **Dev Container Setup**: Automated development environment with Docker
- **Custom Bash Prompt**: Smart path display with problem detection
- **Stack Size Optimization**: Prevents overflow in recursive algorithms
- **Pre-configured Tools**: AtCoder CLI, Online Judge Tools, and AtCoder Library
- **VS Code Integration**: Automatic extension installation and configuration

## Usage

For detailed instructions on how to use this project, please visit [the original tutorial](https://kaiyou9.com/atcoder-cpp-env/).

## Tools Used

This project uses the following external tools:

- [AtCoder CLI (acc)](https://github.com/Tatamo/atcoder-cli) - for contest management and submission.
- [Online Judge Tools (oj)](https://github.com/onojline-judge-tools/oj) - for test case downloading and local testing.
- [AtCoder Library (ACL)](https://github.com/atcoder/ac-library) - a library for competitive programming, used for efficient algorithm implementations.

## License

[MIT License](./LICENSE).

## Acknowledgments

This development environment was inspired by and based on the tutorial from [kaiyou9.com](https://kaiyou9.com/atcoder-cpp-env/). Special thanks to the original author for providing the foundational setup guide.

## Troubleshooting

**Issue: acc/oj cannot access AtCoder**

Solution: Manually paste cookies from AtCoder.jp using vim or other text editor into the cookie file.
