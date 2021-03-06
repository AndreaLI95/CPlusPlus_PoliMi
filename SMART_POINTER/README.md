# SMART POINTER EXERCISE

THIS IS THE QUITE ELEMENTARY EXERCISE ON SHARED POINTER, WHICH AIMS TO SHARE DATA BETWEEN SEVERAL OBJECTS, THE CONTENT OF EXERCISE IS AS FOLLOWING:

Implement a program that, similar to TripAdvisor, lets users share their comments about different places. You need to define three classes, namely `user`, `place` and `comment`, such that:

* Each user has a profile that shows `name` (`string`), `surname` (`string`) and `comments` about different places.
* Each place has a profile as well, that shows its `name` (`string`), `description` (`string`) and `comments` that different users wrote about it.
* Each comment has a text.

Hint: `user`s and `place`s have access to their corresponding comments through shared pointers, so that only one copy of each is stored in memory.

In addition, implement the following method in the user class to write comments about a place:

```cpp
void leave_a_comment(string const &, place &);
```