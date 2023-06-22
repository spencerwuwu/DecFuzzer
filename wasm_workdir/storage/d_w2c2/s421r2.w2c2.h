#ifndef s421r2_H
#define s421r2_H

#include "w2c2_base.h"

typedef struct s421r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s421r2Instance;

void f0(s421r2Instance*);

void f1(s421r2Instance*);

U32 f2(s421r2Instance*);

void f3(s421r2Instance*,U32);

U32 f4(s421r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s421r2Instance*,U32,U32,U32,U32,U32);

void f6(s421r2Instance*,U32);

void f7(s421r2Instance*,U32,U32,U32);

void f8(s421r2Instance*,U32,U32,U32);

void s421r2____wasm_call_ctors(s421r2Instance*i);

void s421r2____wasm_apply_data_relocs(s421r2Instance*i);

U32 s421r2_func_1(s421r2Instance*i);

void s421r2_call_cb(s421r2Instance*i,U32 l0);

void s421r2Instantiate(s421r2Instance* instance, void* resolve(const char* module, const char* name));

void s421r2FreeInstance(s421r2Instance* instance);

#endif /* s421r2_H */

