non-recursive-printer
=====================

I wrote this after seeing the question on Stackoverflow. It asked users to print numbers 1 -> 1000 without using loops or conditionals. I decided to write an implementation that doesn't use any recursion. `indices` and `build_indices` are templates that generate a sequence of numbers. The template that contains that sequence is passed to `print_to_impl` which uses a parameter pack expansion trick to print the elements.

