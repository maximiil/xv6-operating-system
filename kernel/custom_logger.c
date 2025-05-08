#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "custom_logger.h"

void log_message(enum log_level level, const char *message) {
  switch (level) {
    case INFO:
      printf("INFO    - %s\n", message);
      break;
    case WARNING:
      printf("WARNING - %s\n", message);
      break;
    case ERROR:
      printf("ERROR   - %s\n", message);
      break;
    default:
      printf("UNKNOWN - %s\n", message);
  }
}
