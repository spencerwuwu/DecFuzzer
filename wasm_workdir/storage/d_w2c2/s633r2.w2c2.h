#ifndef s633r2_H
#define s633r2_H

#include "w2c2_base.h"

typedef struct s633r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s633r2Instance;

void f0(s633r2Instance*);

void f1(s633r2Instance*);

U32 f2(s633r2Instance*);

void f3(s633r2Instance*,U32);

U32 f4(s633r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s633r2Instance*,U32,U32,U32,U32,U32);

void f6(s633r2Instance*,U32);

void f7(s633r2Instance*,U32,U32,U32);

void f8(s633r2Instance*,U32,U32,U32);

void s633r2____wasm_call_ctors(s633r2Instance*i);

void s633r2____wasm_apply_data_relocs(s633r2Instance*i);

U32 s633r2_func_1(s633r2Instance*i);

void s633r2_call_cb(s633r2Instance*i,U32 l0);

void s633r2Instantiate(s633r2Instance* instance, void* resolve(const char* module, const char* name));

void s633r2FreeInstance(s633r2Instance* instance);

#endif /* s633r2_H */

