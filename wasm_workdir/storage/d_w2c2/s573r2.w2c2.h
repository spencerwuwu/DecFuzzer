#ifndef s573r2_H
#define s573r2_H

#include "w2c2_base.h"

typedef struct s573r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s573r2Instance;

void f0(s573r2Instance*);

void f1(s573r2Instance*);

U32 f2(s573r2Instance*);

void f3(s573r2Instance*,U32);

U32 f4(s573r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s573r2Instance*,U32,U32,U32,U32,U32);

void f6(s573r2Instance*,U32);

void f7(s573r2Instance*,U32,U32,U32);

void f8(s573r2Instance*,U32,U32,U32);

void s573r2____wasm_call_ctors(s573r2Instance*i);

void s573r2____wasm_apply_data_relocs(s573r2Instance*i);

U32 s573r2_func_1(s573r2Instance*i);

void s573r2_call_cb(s573r2Instance*i,U32 l0);

void s573r2Instantiate(s573r2Instance* instance, void* resolve(const char* module, const char* name));

void s573r2FreeInstance(s573r2Instance* instance);

#endif /* s573r2_H */

