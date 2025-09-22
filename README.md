Syntax, Semantics, and Memory Management

Course: MSCS 632 – Advanced Programming Languages
Student: Anushka Nanaware
Professor: Dr. Jay Thom
Date: September 21, 2025

📌 Overview

This repository contains my submission for Assignment 2, which examines how different programming languages handle syntax, semantics, and memory management. The assignment highlights the unique design decisions made by Python, JavaScript, C++, Rust, and Java, and explains how these decisions affect debugging, execution behavior, and performance.

The project is divided into three sections:

Syntax Errors – Programs in Python, JavaScript, and C++ are intentionally written with syntax mistakes to observe how each language reports and handles them.

Semantics – Custom programs in Python, JavaScript, and C++ demonstrate closures, scoping rules, and type systems. An analysis follows, identifying three major semantic differences that influence runtime performance and correctness.

Memory Management – Programs in Rust, Java, and C++ highlight ownership and borrowing, garbage collection, and manual/RAII memory management. Profiling observations explain predictable vs. nondeterministic memory usage across languages.

📂 Repository Structure

Part1_SyntaxErrors/ → Python, JavaScript, and C++ programs with introduced syntax errors and their explanations.

Part2_SyntaxSemantics/ → Original programs showing scope, closures, typing, and semantic comparisons.

Part3_MemoryManagement/ → Examples in Rust, Java, and C++ demonstrating ownership, garbage collection, and RAII/manual memory management.

⚙️ How to Run

Each file is standalone. Example commands:

Python → python3 file.py

JavaScript → node file.js

C++ → g++ file.cpp -o output && ./output

Java → javac file.java && java ClassName

Rust → rustc file.rs && ./file

📝 Notes

This repository demonstrates how language design influences development workflows. Python and JavaScript allow flexibility but defer many errors to runtime, while C++ enforces strict compile-time checks. Rust introduces ownership and borrowing for safety without garbage collection, while Java uses automatic garbage collection with nondeterministic timing.

By combining error exploration, semantic differences, and memory profiling, the assignment illustrates trade-offs between flexibility, performance, and safety across languages
