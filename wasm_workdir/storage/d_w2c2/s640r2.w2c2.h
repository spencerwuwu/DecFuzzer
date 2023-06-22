#ifndef s640r2_H
#define s640r2_H

#include "w2c2_base.h"

typedef struct s640r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s640r2Instance;

void f0(s640r2Instance*);

void f1(s640r2Instance*);

U32 f2(s640r2Instance*);

void f3(s640r2Instance*,U32);

U32 f4(s640r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s640r2Instance*,U32,U32,U32,U32,U32);

void f6(s640r2Instance*,U32);

void f7(s640r2Instance*,U32,U32,U32);

void f8(s640r2Instance*,U32,U32,U32);

void s640r2____wasm_call_ctors(s640r2Instance*i);

void s640r2____wasm_apply_data_relocs(s640r2Instance*i);

U32 s640r2_func_1(s640r2Instance*i);

void s640r2_call_cb(s640r2Instance*i,U32 l0);

void s640r2Instantiate(s640r2Instance* instance, void* resolve(const char* module, const char* name));

void s640r2FreeInstance(s640r2Instance* instance);

#endif /* s640r2_H */

