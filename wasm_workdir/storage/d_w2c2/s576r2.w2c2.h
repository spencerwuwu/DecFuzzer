#ifndef s576r2_H
#define s576r2_H

#include "w2c2_base.h"

typedef struct s576r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s576r2Instance;

void f0(s576r2Instance*);

void f1(s576r2Instance*);

U32 f2(s576r2Instance*);

void f3(s576r2Instance*,U32);

U32 f4(s576r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s576r2Instance*,U32,U32,U32,U32,U32);

void f6(s576r2Instance*,U32);

void f7(s576r2Instance*,U32,U32,U32);

void f8(s576r2Instance*,U32,U32,U32);

void s576r2____wasm_call_ctors(s576r2Instance*i);

void s576r2____wasm_apply_data_relocs(s576r2Instance*i);

U32 s576r2_func_1(s576r2Instance*i);

void s576r2_call_cb(s576r2Instance*i,U32 l0);

void s576r2Instantiate(s576r2Instance* instance, void* resolve(const char* module, const char* name));

void s576r2FreeInstance(s576r2Instance* instance);

#endif /* s576r2_H */

