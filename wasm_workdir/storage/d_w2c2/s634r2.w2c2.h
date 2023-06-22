#ifndef s634r2_H
#define s634r2_H

#include "w2c2_base.h"

typedef struct s634r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s634r2Instance;

void f0(s634r2Instance*);

void f1(s634r2Instance*);

U32 f2(s634r2Instance*);

void f3(s634r2Instance*,U32);

void f4(s634r2Instance*,U32);

void s634r2____wasm_call_ctors(s634r2Instance*i);

void s634r2____wasm_apply_data_relocs(s634r2Instance*i);

U32 s634r2_func_1(s634r2Instance*i);

void s634r2_call_cb(s634r2Instance*i,U32 l0);

void s634r2Instantiate(s634r2Instance* instance, void* resolve(const char* module, const char* name));

void s634r2FreeInstance(s634r2Instance* instance);

#endif /* s634r2_H */

