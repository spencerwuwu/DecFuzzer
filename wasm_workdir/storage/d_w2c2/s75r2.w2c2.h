#ifndef s75r2_H
#define s75r2_H

#include "w2c2_base.h"

typedef struct s75r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s75r2Instance;

void f0(s75r2Instance*);

void f1(s75r2Instance*);

U32 f2(s75r2Instance*);

void f3(s75r2Instance*,U32);

U32 f4(s75r2Instance*,U32,U32,U32,U32);

void f5(s75r2Instance*,U32,U32,U32,U32,U32);

void f6(s75r2Instance*,U32);

void f7(s75r2Instance*,U32,U32,U32);

void f8(s75r2Instance*,U32,U32,U32);

void s75r2____wasm_call_ctors(s75r2Instance*i);

void s75r2____wasm_apply_data_relocs(s75r2Instance*i);

U32 s75r2_func_1(s75r2Instance*i);

void s75r2_call_cb(s75r2Instance*i,U32 l0);

void s75r2Instantiate(s75r2Instance* instance, void* resolve(const char* module, const char* name));

void s75r2FreeInstance(s75r2Instance* instance);

#endif /* s75r2_H */

