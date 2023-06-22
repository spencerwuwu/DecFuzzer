#ifndef s153r2_H
#define s153r2_H

#include "w2c2_base.h"

typedef struct s153r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s153r2Instance;

void f0(s153r2Instance*);

void f1(s153r2Instance*);

U32 f2(s153r2Instance*);

void f3(s153r2Instance*,U32);

U32 f4(s153r2Instance*,U32,U32,U32,U32,U32);

void f5(s153r2Instance*,U32,U32,U32,U32,U32);

void f6(s153r2Instance*,U32);

void f7(s153r2Instance*,U32,U32,U32);

void f8(s153r2Instance*,U32,U32,U32);

void s153r2____wasm_call_ctors(s153r2Instance*i);

void s153r2____wasm_apply_data_relocs(s153r2Instance*i);

U32 s153r2_func_1(s153r2Instance*i);

void s153r2_call_cb(s153r2Instance*i,U32 l0);

void s153r2Instantiate(s153r2Instance* instance, void* resolve(const char* module, const char* name));

void s153r2FreeInstance(s153r2Instance* instance);

#endif /* s153r2_H */

