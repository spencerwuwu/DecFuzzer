#ifndef s794r2_H
#define s794r2_H

#include "w2c2_base.h"

typedef struct s794r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s794r2Instance;

void f0(s794r2Instance*);

void f1(s794r2Instance*);

U32 f2(s794r2Instance*);

void f3(s794r2Instance*,U32);

U32 f4(s794r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s794r2Instance*,U32,U32,U32,U32,U32);

void f6(s794r2Instance*,U32);

void f7(s794r2Instance*,U32,U32,U32);

void f8(s794r2Instance*,U32,U32,U32);

void s794r2____wasm_call_ctors(s794r2Instance*i);

void s794r2____wasm_apply_data_relocs(s794r2Instance*i);

U32 s794r2_func_1(s794r2Instance*i);

void s794r2_call_cb(s794r2Instance*i,U32 l0);

void s794r2Instantiate(s794r2Instance* instance, void* resolve(const char* module, const char* name));

void s794r2FreeInstance(s794r2Instance* instance);

#endif /* s794r2_H */

