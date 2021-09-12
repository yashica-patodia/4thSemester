// // Stage 1-Error occured(Incidence)
// // STage 2-Create exception object (From int to a full blown object)(Raise)
// // Stage 3-Detect exceptions(Detect)
// // Stage 4-Handle the exceptions(Handling)
// // Stage 5-Recover from exceptions(Recovery)

// int f() {
// int error;
// /* ... */
// if (error) /* Stage 1: error occurred */
// return -1; /* Stage 2: generate exception object */
// /* ... */
// }
// int main(void) {
// if (f() != 0) /* Stage 3: detect exception */
// {
// /* Stage 4: handle exception */
// }
// /* Stage recover

// int Push(int i) {
// if (top_ == size-1) // Incidence
// return 0; // Raise
// else
// stack_[++top_] = i;
// return 1;
// }
// int main() {
// int x;
// // ...
// if (!Push(x)) // Detect {
// // Handling
// }
// // Recovery
// }