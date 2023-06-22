#ifndef s881r2_H
#define s881r2_H

#include "w2c2_base.h"

typedef struct s881r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s881r2Instance;

void f0(s881r2Instance*);

void f1(s881r2Instance*);

U32 f2(s881r2Instance*);

void f3(s881r2Instance*,U32);

U32 f4(s881r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s881r2Instance*,U32,U32,U32,U32,U32);

void f6(s881r2Instance*,U32);

void f7(s881r2Instance*,U32,U32,U32);

void f8(s881r2Instance*,U32,U32,U32);

void s881r2____wasm_call_ctors(s881r2Instance*i);

void s881r2____wasm_apply_data_relocs(s881r2Instance*i);

U32 s881r2_func_1(s881r2Instance*i);

void s881r2_call_cb(s881r2Instance*i,U32 l0);

void s881r2Instantiate(s881r2Instance* instance, void* resolve(const char* module, const char* name));

void s881r2FreeInstance(s881r2Instance* instance);

#endif /* s881r2_H */

