#ifndef s870r2_H
#define s870r2_H

#include "w2c2_base.h"

typedef struct s870r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s870r2Instance;

void f0(s870r2Instance*);

void f1(s870r2Instance*);

U32 f2(s870r2Instance*);

void f3(s870r2Instance*,U32);

U32 f4(s870r2Instance*,U32,U32,U32);

void f5(s870r2Instance*,U32,U32,U32,U32,U32);

void f6(s870r2Instance*,U32);

void f7(s870r2Instance*,U32,U32,U32);

void f8(s870r2Instance*,U32,U32,U32);

void s870r2____wasm_call_ctors(s870r2Instance*i);

void s870r2____wasm_apply_data_relocs(s870r2Instance*i);

U32 s870r2_func_1(s870r2Instance*i);

void s870r2_call_cb(s870r2Instance*i,U32 l0);

void s870r2Instantiate(s870r2Instance* instance, void* resolve(const char* module, const char* name));

void s870r2FreeInstance(s870r2Instance* instance);

#endif /* s870r2_H */

