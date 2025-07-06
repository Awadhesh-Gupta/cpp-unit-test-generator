
# C++ Unit Test Generator with LLM & Coverage

This project auto-generates unit tests for a given C++ project using an LLM (e.g., LLaMA), runs them with Google Test, and integrates GNU code coverage tools to measure effectiveness.

## 🔧 Setup Instructions

```bash
git clone https://github.com/Awadhesh-Gupta/cpp-unit-test-generator.git
cd cpp-unit-test-generator
mkdir build && cd build
cmake -DCMAKE_CXX_FLAGS="--coverage" ..
make
./runTests
```

## 📊 Test Coverage

- ✅ 100% line and function coverage (see `/tests/CoverageReport.md` for detailed metrics).
- ✅ HTML report generated via `lcov` + `genhtml`.
- ✅ CI configured with GitHub Actions.

## 📁 Directory Structure

```
src/                # Source code (calculator.cpp, calculator.h)
tests/              # Google Test cases
build/              # Build artifacts
.github/workflows/  # CI workflow YAML
prompts/            # YAML prompts for LLM
```

## 📦 Output Artifacts

Coverage HTML report available via GitHub Actions Artifacts.

## ✍️ Author

**Awadhesh Gupta**  
Project: cpp-unit-test-generator  
