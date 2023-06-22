#ifndef s925r2_H
#define s925r2_H

#include "w2c2_base.h"

typedef struct s925r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s925r2Instance;

void f0(s925r2Instance*);

void f1(s925r2Instance*);

U32 f2(s925r2Instance*);

void f3(s925r2Instance*,U32);

U32 f4(s925r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s925r2Instance*,U32,U32,U32,U32,U32);

void f6(s925r2Instance*,U32);

void f7(s925r2Instance*,U32,U32,U32);

void f8(s925r2Instance*,U32,U32,U32);

void s925r2____wasm_call_ctors(s925r2Instance*i);

void s925r2____wasm_apply_data_relocs(s925r2Instance*i);

U32 s925r2_func_1(s925r2Instance*i);

void s925r2_call_cb(s925r2Instance*i,U32 l0);

void s925r2Instantiate(s925r2Instance* instance, void* resolve(const char* module, const char* name));

void s925r2FreeInstance(s925r2Instance* instance);

#endif /* s925r2_H */

