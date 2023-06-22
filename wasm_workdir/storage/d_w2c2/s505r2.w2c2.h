#ifndef s505r2_H
#define s505r2_H

#include "w2c2_base.h"

typedef struct s505r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s505r2Instance;

void f0(s505r2Instance*);

void f1(s505r2Instance*);

U32 f2(s505r2Instance*);

void f3(s505r2Instance*,U32);

U32 f4(s505r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s505r2Instance*,U32,U32,U32,U32,U32);

void f6(s505r2Instance*,U32);

void f7(s505r2Instance*,U32,U32,U32);

void f8(s505r2Instance*,U32,U32,U32);

void s505r2____wasm_call_ctors(s505r2Instance*i);

void s505r2____wasm_apply_data_relocs(s505r2Instance*i);

U32 s505r2_func_1(s505r2Instance*i);

void s505r2_call_cb(s505r2Instance*i,U32 l0);

void s505r2Instantiate(s505r2Instance* instance, void* resolve(const char* module, const char* name));

void s505r2FreeInstance(s505r2Instance* instance);

#endif /* s505r2_H */

