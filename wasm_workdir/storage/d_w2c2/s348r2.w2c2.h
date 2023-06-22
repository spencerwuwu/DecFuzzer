#ifndef s348r2_H
#define s348r2_H

#include "w2c2_base.h"

typedef struct s348r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s348r2Instance;

void f0(s348r2Instance*);

void f1(s348r2Instance*);

U32 f2(s348r2Instance*);

void f3(s348r2Instance*,U32);

U32 f4(s348r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s348r2Instance*,U32,U32,U32,U32,U32);

void f6(s348r2Instance*,U32);

void f7(s348r2Instance*,U32,U32,U32);

void f8(s348r2Instance*,U32,U32,U32);

void s348r2____wasm_call_ctors(s348r2Instance*i);

void s348r2____wasm_apply_data_relocs(s348r2Instance*i);

U32 s348r2_func_1(s348r2Instance*i);

void s348r2_call_cb(s348r2Instance*i,U32 l0);

void s348r2Instantiate(s348r2Instance* instance, void* resolve(const char* module, const char* name));

void s348r2FreeInstance(s348r2Instance* instance);

#endif /* s348r2_H */

