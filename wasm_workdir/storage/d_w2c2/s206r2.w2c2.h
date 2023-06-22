#ifndef s206r2_H
#define s206r2_H

#include "w2c2_base.h"

typedef struct s206r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s206r2Instance;

void f0(s206r2Instance*);

void f1(s206r2Instance*);

U32 f2(s206r2Instance*);

void f3(s206r2Instance*,U32);

U32 f4(s206r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s206r2Instance*,U32,U32,U32,U32,U32);

void f6(s206r2Instance*,U32);

void f7(s206r2Instance*,U32,U32,U32);

void f8(s206r2Instance*,U32,U32,U32);

void s206r2____wasm_call_ctors(s206r2Instance*i);

void s206r2____wasm_apply_data_relocs(s206r2Instance*i);

U32 s206r2_func_1(s206r2Instance*i);

void s206r2_call_cb(s206r2Instance*i,U32 l0);

void s206r2Instantiate(s206r2Instance* instance, void* resolve(const char* module, const char* name));

void s206r2FreeInstance(s206r2Instance* instance);

#endif /* s206r2_H */

