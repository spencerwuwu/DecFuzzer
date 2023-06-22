#ifndef s795r2_H
#define s795r2_H

#include "w2c2_base.h"

typedef struct s795r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s795r2Instance;

void f0(s795r2Instance*);

void f1(s795r2Instance*);

U32 f2(s795r2Instance*);

void f3(s795r2Instance*,U32);

U32 f4(s795r2Instance*,U32,U32,U32);

void f5(s795r2Instance*,U32,U32,U32,U32,U32);

void f6(s795r2Instance*,U32);

void f7(s795r2Instance*,U32,U32,U32);

void f8(s795r2Instance*,U32,U32,U32);

void s795r2____wasm_call_ctors(s795r2Instance*i);

void s795r2____wasm_apply_data_relocs(s795r2Instance*i);

U32 s795r2_func_1(s795r2Instance*i);

void s795r2_call_cb(s795r2Instance*i,U32 l0);

void s795r2Instantiate(s795r2Instance* instance, void* resolve(const char* module, const char* name));

void s795r2FreeInstance(s795r2Instance* instance);

#endif /* s795r2_H */

