#ifndef s997r2_H
#define s997r2_H

#include "w2c2_base.h"

typedef struct s997r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s997r2Instance;

void f0(s997r2Instance*);

void f1(s997r2Instance*);

U32 f2(s997r2Instance*);

void f3(s997r2Instance*,U32);

U32 f4(s997r2Instance*,U32,U32,U32);

void f5(s997r2Instance*,U32,U32,U32,U32,U32);

void f6(s997r2Instance*,U32);

void f7(s997r2Instance*,U32,U32,U32);

void f8(s997r2Instance*,U32,U32,U32);

void s997r2____wasm_call_ctors(s997r2Instance*i);

void s997r2____wasm_apply_data_relocs(s997r2Instance*i);

U32 s997r2_func_1(s997r2Instance*i);

void s997r2_call_cb(s997r2Instance*i,U32 l0);

void s997r2Instantiate(s997r2Instance* instance, void* resolve(const char* module, const char* name));

void s997r2FreeInstance(s997r2Instance* instance);

#endif /* s997r2_H */

