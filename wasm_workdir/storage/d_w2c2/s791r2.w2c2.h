#ifndef s791r2_H
#define s791r2_H

#include "w2c2_base.h"

typedef struct s791r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s791r2Instance;

void f0(s791r2Instance*);

void f1(s791r2Instance*);

U32 f2(s791r2Instance*);

void f3(s791r2Instance*,U32);

U32 f4(s791r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s791r2Instance*,U32,U32,U32,U32,U32);

void f6(s791r2Instance*,U32);

void f7(s791r2Instance*,U32,U32,U32);

void f8(s791r2Instance*,U32,U32,U32);

void s791r2____wasm_call_ctors(s791r2Instance*i);

void s791r2____wasm_apply_data_relocs(s791r2Instance*i);

U32 s791r2_func_1(s791r2Instance*i);

void s791r2_call_cb(s791r2Instance*i,U32 l0);

void s791r2Instantiate(s791r2Instance* instance, void* resolve(const char* module, const char* name));

void s791r2FreeInstance(s791r2Instance* instance);

#endif /* s791r2_H */

