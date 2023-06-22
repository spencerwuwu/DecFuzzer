#ifndef s516r2_H
#define s516r2_H

#include "w2c2_base.h"

typedef struct s516r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s516r2Instance;

void f0(s516r2Instance*);

void f1(s516r2Instance*);

U32 f2(s516r2Instance*);

void f3(s516r2Instance*,U32);

U32 f4(s516r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s516r2Instance*,U32,U32,U32,U32,U32);

void f6(s516r2Instance*,U32);

void f7(s516r2Instance*,U32,U32,U32);

void f8(s516r2Instance*,U32,U32,U32);

void s516r2____wasm_call_ctors(s516r2Instance*i);

void s516r2____wasm_apply_data_relocs(s516r2Instance*i);

U32 s516r2_func_1(s516r2Instance*i);

void s516r2_call_cb(s516r2Instance*i,U32 l0);

void s516r2Instantiate(s516r2Instance* instance, void* resolve(const char* module, const char* name));

void s516r2FreeInstance(s516r2Instance* instance);

#endif /* s516r2_H */

