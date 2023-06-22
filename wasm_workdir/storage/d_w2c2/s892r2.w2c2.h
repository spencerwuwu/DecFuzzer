#ifndef s892r2_H
#define s892r2_H

#include "w2c2_base.h"

typedef struct s892r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s892r2Instance;

void f0(s892r2Instance*);

void f1(s892r2Instance*);

U32 f2(s892r2Instance*);

void f3(s892r2Instance*,U32);

U32 f4(s892r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s892r2Instance*,U32,U32,U32,U32,U32);

void f6(s892r2Instance*,U32);

void f7(s892r2Instance*,U32,U32,U32);

void f8(s892r2Instance*,U32,U32,U32);

void s892r2____wasm_call_ctors(s892r2Instance*i);

void s892r2____wasm_apply_data_relocs(s892r2Instance*i);

U32 s892r2_func_1(s892r2Instance*i);

void s892r2_call_cb(s892r2Instance*i,U32 l0);

void s892r2Instantiate(s892r2Instance* instance, void* resolve(const char* module, const char* name));

void s892r2FreeInstance(s892r2Instance* instance);

#endif /* s892r2_H */

