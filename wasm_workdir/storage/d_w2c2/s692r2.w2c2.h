#ifndef s692r2_H
#define s692r2_H

#include "w2c2_base.h"

typedef struct s692r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s692r2Instance;

void f0(s692r2Instance*);

void f1(s692r2Instance*);

U32 f2(s692r2Instance*);

void f3(s692r2Instance*,U32);

U32 f4(s692r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s692r2Instance*,U32,U32,U32,U32,U32);

void f6(s692r2Instance*,U32);

void f7(s692r2Instance*,U32,U32,U32);

void f8(s692r2Instance*,U32,U32,U32);

void s692r2____wasm_call_ctors(s692r2Instance*i);

void s692r2____wasm_apply_data_relocs(s692r2Instance*i);

U32 s692r2_func_1(s692r2Instance*i);

void s692r2_call_cb(s692r2Instance*i,U32 l0);

void s692r2Instantiate(s692r2Instance* instance, void* resolve(const char* module, const char* name));

void s692r2FreeInstance(s692r2Instance* instance);

#endif /* s692r2_H */

