// reinterpret cast converts any pointer type to any other pointer type,
// even of unrelated classes
// The operation result is a simple binary copy of the value from one pointer
// to the other
// All pointer conversions are allowed: neither the content pointed nor the
// pointer type itself is checked
// It can also cast pointers to or from integer types
// The format in which this integer value represents a pointer is
// platform-specific
// The only guarantee is that a pointer cast to an integer type large enough to
// fully contain it (such as intptr t), is guaranteed to be able to be cast
// back to a valid pointer
// The conversions that can be performed by reinterpret cast but not by
// static cast are low-level operations based on reinterpreting the binary
// representations of the types, which on most cases results in code which is
// system-specific, and thus non-portable